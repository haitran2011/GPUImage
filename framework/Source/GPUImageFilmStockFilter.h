#import "GPUImageFilterGroup.h"

@class GPUImagePicture;

// Note: If you want to use this effect you have to add lookup_filmstock.png
//       from Resources folder to your application bundle.

@interface GPUImageFilmStockFilter : GPUImageFilterGroup
{
    GPUImagePicture *lookupImageSource;
}

@end
