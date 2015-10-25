result = rand(9)
puts "Guess number range(0..9)"
begin
  guess = gets().to_i
  if (guess > result) 
	puts "Bigger!"
  end
  if (guess < result) 
	puts "Smaller!";
  end
end while (guess != result);
puts "Cong.!Result is #{result}!"
