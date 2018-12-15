def print(input)
  case input
  when 25
    puts "Christmas"
  when 24
    puts "Christmas Eve"
  when 23
    puts "Christmas Eve Eve"
  when 22
    puts "Christmas Eve Eve Eve"
  else
    raise ArgumentError, "invalid input: #{input}"
  end
end

input = gets.chomp.to_i
print(input)
