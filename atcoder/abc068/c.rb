n,m = gets.split(" ").map(&:to_i)
candidates = []
h = Hash.new(false)
m.times do
  a,b = gets.split(" ").map(&:to_i)
  if b == n
    h[a] = true
  end
  if a == 1
    candidates << b
  end
end

ans = "IMPOSSIBLE"
candidates.each do |c|
  if h[c]
    ans = "POSSIBLE"
    break
  end
end

puts ans
