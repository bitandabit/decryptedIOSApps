//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCPreviewScissorsToolBarButtonItem, UIColor, UIImage;

@protocol SCPreviewScissorsToolBarButtonItemDelegate <NSObject>
- (void)ScissorsToolBarButtonItemDidChangeTintColor:(UIColor *)arg1;
- (void)scissorsToolBarButtonItemDidChangePurikuraImage:(UIImage *)arg1;
- (void)scissorsToolBarButtonItemDidPressTint:(SCPreviewScissorsToolBarButtonItem *)arg1 enabled:(_Bool)arg2;
- (void)scissorsToolBarButtonItemDidPressPurikura:(SCPreviewScissorsToolBarButtonItem *)arg1 enabled:(_Bool)arg2;
- (void)scissorsToolBarButtonItemDidPressBlur:(SCPreviewScissorsToolBarButtonItem *)arg1 enabled:(_Bool)arg2;
- (void)scissorsToolBarButtonItemDidPressErase:(SCPreviewScissorsToolBarButtonItem *)arg1 enabled:(_Bool)arg2;
- (void)scissorsToolBarButtonItemDidPressCut:(SCPreviewScissorsToolBarButtonItem *)arg1 enabled:(_Bool)arg2;
- (void)scissorsToolBarButtonItemDidPressRevert:(SCPreviewScissorsToolBarButtonItem *)arg1;
@end

