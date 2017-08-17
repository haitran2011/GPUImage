#import "GPUImageFilterGroup.h"

@class GPUImagePicture;

// Note: If you want to use this effect you have to add lookup_edgy_amber.png
//       from Resources folder to your application bundle.

@interface GPUImageEdgyAmberFilter : GPUImageFilterGroup
{
    GPUImagePicture *lookupImageSource;
}

@end
