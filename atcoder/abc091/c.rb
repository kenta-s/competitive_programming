n = gets.to_i

points = []

color = {}

n.times do
  r = gets.split(" ").map(&:to_i)
  color[r[0]] = "red"
  points << r
end

n.times do
  b = gets.split(" ").map(&:to_i)
  color[b[0]] = "blue"
  points << b
end

points.sort!{|a,b| a[1] <=> b[1]}

pending = []
count = 0

(n*2).times do |i|
  if color[points[i][0]] == "red"
    pending << points[i]
  else
    next if pending.empty?
    hoge = pending.sort{|a,b| b[0] <=> a[0]}
    flg = false
    hoge.each do |h|
      if !flg && h[0] < points[i][0]
        pending -= [h]
        count += 1
        flg = true
      end
    end
  end
end

puts count
