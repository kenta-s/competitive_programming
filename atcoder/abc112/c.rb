n = gets.to_i

inputs = []
ans = []
n.times do
  x, y, h = gets.split(" ").map(&:to_i)
  if h == 100
    ans << [x,y,h]
  end
  inputs << [x, y, h]
end

if !ans.empty?
  puts ans.join(" ")
  exit
end

(0..100).each do |x|
  (0..100).each do |y|
    t = inputs.first
    h = (t[2] + (t[0] - x).abs + (t[1] - y).abs)
    t2 = inputs[1]
    next unless t2[2] == (h - (t2[0] - x).abs - (t2[1] - y).abs)
    if inputs.all?{|t| t[2] == (h - (t[0] - x).abs - (t[1] - y).abs) }
      puts "#{x} #{y} #{h}"
      exit
    end
  end
end
