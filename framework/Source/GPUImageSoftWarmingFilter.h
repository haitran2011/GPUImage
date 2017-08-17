#import "GPUImageFilterGroup.h"

@class GPUImagePicture;

// Note: If you want to use this effect you have to add lookup_soft_warming.png
//       from Resources folder to your application bundle.

@interface GPUImageSoftWarmingFilter : GPUImageFilterGroup
{
    GPUImagePicture *lookupImageSource;
}

@end
