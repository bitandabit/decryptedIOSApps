//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCSnapcodeImageEditController, UIImage;

@protocol SCSnapcodeImageEditControllerDelegate <NSObject>
- (void)snapcodeImageEditControllerDidRemoveImage:(SCSnapcodeImageEditController *)arg1;
- (void)snapcodeImageEditController:(SCSnapcodeImageEditController *)arg1 didSaveImageScreenshot:(UIImage *)arg2 selectedImage:(UIImage *)arg3 imageTransform:(struct CGAffineTransform)arg4;
@end

