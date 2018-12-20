n = gets.to_i

def base_count(num)
  return 0 if num < 4
  keta = (num - 3)
  base = 6
  (keta - 1).times do |i|
    base = base * 4
  end
  base
end

def check_three_digits(digits)
  return 0 if digits.size < 3
  count = 0
  (1..digits.last(3).join.to_i).each do |i|
    digits = i.to_s.chars.map(&:to_i)
    array = [7,5,3]
    digits.each do |d|
      break unless [7,5,3].include?(d)
      array.delete(d)
    end
    count += 1 if array.empty?
  end
  count
end

digits = n.to_s.chars.map(&:to_i)
size = digits.size

first_digit = digits.first
count = if first_digit > 7
  4 * base_count(digits.size)
elsif first_digit == 7
  3 * base_count(digits.size) + check_three_digits(digits)
elsif first_digit > 5
  3 * base_count(digits.size)
elsif first_digit == 5
  2 * base_count(digits.size) + check_three_digits(digits)
elsif first_digit > 3
  2 * base_count(digits.size)
elsif first_digit == 3
  base_count(digits.size) + check_three_digits(digits)
else
  base_count(digits.size)
end

puts count
