#include "filetypesview.h"

extern "C"
{
	  KCModule *create_filetypes(QWidget *parent, const char *)
          {
        return new FileTypesView(parent, "filetypes");
	  }

	    void init_filetypes()
		      {
			        }
}

