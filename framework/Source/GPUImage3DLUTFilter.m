#import "GPUImage3DLUTFilter.h"
#import "GPUImagePicture.h"
#import "GPUImageLookupFilter.h"

@implementation GPUImage3DLUTFilter

- (id)initWith3DLUTImage:(UIImage *)image
{
    if (!(self = [super init]))
    {
        return nil;
    }
    
    NSAssert(image, @"To use GPUImage3DLUTFilter you need to add 3dlut style image to your application bundle.");
    
    lookupImageSource = [[GPUImagePicture alloc] initWithImage:image];
    GPUImageLookupFilter *lookupFilter = [[GPUImageLookupFilter alloc] init];
    [self addFilter:lookupFilter];
    
    [lookupImageSource addTarget:lookupFilter atTextureLocation:1];
    [lookupImageSource processImage];
    
    self.initialFilters = [NSArray arrayWithObjects:lookupFilter, nil];
    self.terminalFilter = lookupFilter;
    
    return self;
}


#pragma mark -
#pragma mark Accessors

@end
