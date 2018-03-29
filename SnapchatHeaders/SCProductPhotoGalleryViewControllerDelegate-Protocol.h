//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCProductIntroPhoto, SCProductPhotoGalleryViewController, UILongPressGestureRecognizer, UIView;

@protocol SCProductPhotoGalleryViewControllerDelegate <NSObject>

@optional
- (_Bool)photoGalleryViewController:(SCProductPhotoGalleryViewController *)arg1 handleLongPressForPhoto:(SCProductIntroPhoto *)arg2 withGestureRecognizer:(UILongPressGestureRecognizer *)arg3;
- (double)photoGalleryViewController:(SCProductPhotoGalleryViewController *)arg1 maximumZoomScaleForPhoto:(SCProductIntroPhoto *)arg2;
- (UIView *)photoGalleryViewController:(SCProductPhotoGalleryViewController *)arg1 referenceViewForPhoto:(SCProductIntroPhoto *)arg2;
- (UIView *)photoGalleryViewController:(SCProductPhotoGalleryViewController *)arg1 loadingViewForPhoto:(SCProductIntroPhoto *)arg2 atIndex:(unsigned long long)arg3;
- (void)photoGalleryViewControllerDidDismiss:(SCProductPhotoGalleryViewController *)arg1;
- (void)photoGalleryViewControllerWillDismiss:(SCProductPhotoGalleryViewController *)arg1;
- (void)photoGalleryViewController:(SCProductPhotoGalleryViewController *)arg1 didNavigateToPhoto:(SCProductIntroPhoto *)arg2 atIndex:(unsigned long long)arg3;
@end

