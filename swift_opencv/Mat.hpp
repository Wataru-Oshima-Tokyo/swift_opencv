//
//  Mat.h
//  swift_opencv
//
//  Created by Wataru Oshima on 10/16/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Mat : NSObject

/// Converts a full color image to grayscale image with using OpenCV.
+ (UIImage *)cvtColorBGR2GRAY:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
