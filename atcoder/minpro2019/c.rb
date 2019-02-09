k,a,b = gets.split(" ").map(&:to_i)

hoge = k / (a+2)
rem = k % (a+2)
ans = [1+k, hoge * b + rem + 1].max

if (k/a) > 3
  ans = ((k-a)/2)*b - ((k-a)/2)*a + b
else
  ans = ((k-a)/2)*b - ((k-a)/2)*a + b
end

puts ans
# puts bis
require 'irb'
binding.irb
