n, k = gets.split(" ").map(&:to_i)
sushis = []
types = []
n.times do
  type, base_point = gets.split(" ").map(&:to_i)
  types << type
  sushis << [type, base_point]
end

types.uniq!
sushis.sort!{|a,b| a[1] <=> b[1]}.reverse!
used = sushis[0...k]
use_types = used.map{|u| u[0]}
$unused = sushis[k..-1].reject{|u| use_types.include?(u[0])}.map{|u| u[1]}

a = []
used.each do |u|
  a[u[0]] ||= []
  a[u[0]] << u[1]
end
a.compact!

$b = []
max = 0

def hoge(array)
  tmp = array[-1]
  if tmp.size == 1
    $b << tmp[0]
    # array.delete(tmp)
    array.slice!(array.index(tmp))
  else
    t = tmp[-1]
    # tmp.delete(t)
    tmp.slice!(tmp.index(t))
    array[-1] = tmp
    $b << $unused.shift
    $current_types += 1
  end
end

$current_types = 0
while types.size > $current_types && !a.empty?
  a_max = a.reduce(0){|a,e| a+= e.reduce(0){|na,ne| na+= ne}}
  b_max = $b.reduce(0){|a,e| a+= e}
  bonus = ($b.size + a.size)**2
  max = [max, a_max + b_max + bonus].max
  break if $unused.empty?
  hoge(a)
end

puts max
