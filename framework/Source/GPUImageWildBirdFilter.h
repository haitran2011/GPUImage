#import "GPUImageFilterGroup.h"

@class GPUImagePicture;

// Note: If you want to use this effect you have to add lookup_wildbird.png
//       from Resources folder to your application bundle.

@interface GPUImageWildBirdFilter : GPUImageFilterGroup
{
    GPUImagePicture *lookupImageSource;
}

@end
