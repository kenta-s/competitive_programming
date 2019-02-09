n = gets.to_i

a = 0
b = 0
c = 0
d = 0
e = 0

n.times do
  char = gets.chomp
  case char[0]
  when "M"
    a += 1
  when "A"
    b += 1
  when "R"
    c += 1
  when "C"
    d += 1
  when "H"
    e += 1
  end
end

ans = a*b*c + a*b*d + a*b*e + a*c*d + a*c*e + a*d*e + \
b*c*d + b*c*e + b*d*e + \
c*d*e

puts ans
