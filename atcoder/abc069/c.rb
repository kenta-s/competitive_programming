n = gets.to_i
as = gets.split(" ").map(&:to_i)

two_count = 0
four_multiple = 0
as.each do |a|
  if a % 4 == 0
    four_multiple += 1
  elsif a % 2 == 0
    two_count += 1
  end
end

def check(n, two_count, four_multiple)
 if n == two_count
   return true
 elsif n == four_multiple
   return true
 end
 if two_count < 2
   if n.even?
     if n/2 <= four_multiple
       true
     else
       false
     end
   else
     if (n-1)/2 <= four_multiple
       true
     else
       false
     end
   end
 else
   n = n - two_count
   if n == 0
     false
   else
     if n.even?
       if n/2 <= four_multiple
         true
       else
         false
       end
     else
       if (n+1)/2 <= four_multiple
         true
       else
         false
       end
     end
   end
 end
end

if check(n, two_count, four_multiple)
  puts "Yes"
else
  puts "No"
end
