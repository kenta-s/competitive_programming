n = gets.to_i
balls = gets.split(" ").map(&:to_i).sort{|a,b| b<=>a}

h = Hash.new(0)
balls.each do |b|
  h[b] += 1
end

count = 0

twos = []
(1..31).each do |i|
  twos.push(2**i)
end
twos.reverse!

balls.each do |ball|
  next if h[ball] < 1
  twos.each do |t|
    break if t < ball
    if (t - ball != ball) && h[t - ball] > 0
      h[t - ball] -= 1
      h[ball] -= 1
      count += 1
      next
    end
  end
end

puts count
