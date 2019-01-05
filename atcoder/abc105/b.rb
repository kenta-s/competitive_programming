n = gets.to_i
if n % 4 == 0 || n % 7 == 0 || n % 11 == 0
  puts "Yes"
else
  (0..25).each do |x|
    (0..14).each do |y|
      if 4 * x + 7 * y == n
        puts "Yes"
        exit
      end
    end
  end
  puts "No"
end
