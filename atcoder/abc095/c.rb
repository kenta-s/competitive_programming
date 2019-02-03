a,b,c,x,y = gets.split(" ").map(&:to_i)

min_pizza = [x,y].min

c_total = min_pizza * c * 2
ab_total = min_pizza * a + min_pizza * b
total = 0

if c_total < ab_total
  total += c_total
else
  total += ab_total
end

remainder = (x-y).abs

rem_c = remainder * c * 2
rem_ab = x < y ? (remainder * b) : (remainder * a)

if rem_c < rem_ab
  total += rem_c
else
  total += rem_ab
end

puts total
