//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet, UIImage;
@protocol SCGallerySnap;

@protocol SCGalleryViewCellSelecting <NSObject>
- (unsigned long long)interactionMode;
- (void)animateLongTapForTouchLocation:(struct CGPoint)arg1 reverse:(_Bool)arg2;
- (unsigned long long)selectionModeAtTouchLocation:(struct CGPoint)arg1;
- (void)exitSelectionMode;
- (void)enterSelectionMode:(unsigned long long)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setSelectedWithMode:(unsigned long long)arg1 forSnap:(id <SCGallerySnap>)arg2 selectOverlayImage:(UIImage *)arg3;
- (void)setSelectedWithMode:(unsigned long long)arg1 selectOverlayImage:(UIImage *)arg2 snapIds:(NSSet *)arg3;

@optional
- (_Bool)canSelectAtPoint:(struct CGPoint)arg1;
@end
