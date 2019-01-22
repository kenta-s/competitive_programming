n = gets.to_i
hs = gets.split(" ").map(&:to_i)

$count = 0

def foo(array)
  return if array.empty? || array.all?{|a| a == 0}
  tmp_array = Array.new([])
  i = 0
  array.each do |a|
    if a == 0
      i += 1
    else
      tmp_array[i] ||= []
      tmp_array[i] << a
    end
  end
  tmp_array.compact!
  $count += tmp_array.size
  tmp_array.each do |t|
    tmp = t.map{|e2| e2 - 1}
    foo(tmp)
  end
end

foo(hs)
puts $count
