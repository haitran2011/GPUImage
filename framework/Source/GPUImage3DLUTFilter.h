#import "GPUImageFilterGroup.h"

@class GPUImagePicture;

// Note: If you want to use this effect you have to add 3dlut style image 
//       from Resources folder to your application bundle.

@interface GPUImage3DLUTFilter : GPUImageFilterGroup
{
    GPUImagePicture *lookupImageSource;
}

- (id)initWithImage:(UIImage *)image;

@end
