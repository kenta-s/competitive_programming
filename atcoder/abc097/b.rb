require 'prime'
x = gets.to_i

(1..x).to_a.reverse.each do |n|
  primes = n.prime_division
  primes = primes.map{|a| a[1]}.uniq
  if n == 1 || (primes.size == 1 && 1 < primes[0])
    puts n
    exit
  end
end
