n, m = gets.split(" ").map(&:to_i)

def factorial(n)
  num = 1
  (1..n).each do |i|
    num = (num * i) % (10**9 + 7)
  end
  num
end

if n == m
  puts (factorial(n) * factorial(m) * 2) % (10**9 + 7)
elsif (n - m).abs == 1
  puts (factorial(n) * factorial(m)) % (10**9 + 7)
else
  puts 0
end
