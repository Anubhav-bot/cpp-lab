# General rule for building and running
%: %.cpp
	g++ -o $@.out $<
	./$@.out

# Clean target
.PHONY: clean
clean:
	rm -f *.out
