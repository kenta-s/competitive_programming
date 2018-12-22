n = gets.to_i

def factorials(n)
  return 1 if n.zero?
  n * factorials(n-1)
end

def count_devisors(n)
  (1..n).reduce(0) do |a,e|
    if n % e == 0
      a += 1 
    else
      a += 0
    end
  end
end

$factorials ||= factorials(n)

count = 0
(1..$factorials).each do |i|
  next if $factorials % i != 0
  if count_devisors(i) == 75
    count += 1
  end
end

puts count
