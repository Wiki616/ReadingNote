word = "yes"
filename = "article.txt"

line_number = 0;
File.open(filename) do |f|
	f.lines.each do |line|
		puts "#{line_number}:#{line}" if /#{word}/.match(line)
		line_number += 1
	end
end

sleep(100000)