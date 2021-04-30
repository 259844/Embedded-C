DOXY_FILE= doxyfile
BUILD FILE= html

fixpath= $(subst/,\,$1)

doc:

       doxygen ./$(DOXY_FILE)
       
clean:

       rm - rf $(call FixPath,$(BUILD_FILE)/*)
