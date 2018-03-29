//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, SOJUGalleryTransform, UIImage;

@interface SCVideoTrackedImageStateBuilder : NSObject
{
    UIImage *_image;
    struct CGSize _normalizedSize;
    NSArray *_trajectory;
    SOJUGalleryTransform *_staticTransform;
}

+ (id)withVideoTrackedImageState:(id)arg1;
- (void).cxx_destruct;
- (id)setStaticTransform:(id)arg1;
- (id)setTrajectory:(id)arg1;
- (id)setNormalizedSize:(struct CGSize)arg1;
- (id)setImage:(id)arg1;
- (id)build;

@end

