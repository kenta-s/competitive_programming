n = gets.to_i

bit = ""
while n != 0 do
  if n % 2 != 0
    bit = "1" + bit
    n -= 1
  else
    bit = "0" + bit
    n /= -2
  end
end

puts bit
