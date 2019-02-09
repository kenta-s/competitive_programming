n, k = gets.split(" ").map(&:to_i)

count = (1..n).to_a.reject{|a| a % 2 == 0}.size

puts k <= count ? "YES" : "NO"
