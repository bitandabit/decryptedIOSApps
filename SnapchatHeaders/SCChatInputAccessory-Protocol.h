//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol SCChatInputAccessory <NSObject>
- (UIView *)miniatureView;

@optional
@property(nonatomic) _Bool fullscreenImageUsed;
- (void)reload;
- (_Bool)shouldBeginDragging;
- (void)setDrawerHeight:(double)arg1 resignWhenCollapsed:(_Bool)arg2 animated:(_Bool)arg3 deltaContentOffset:(double)arg4;
- (double)drawerHeight;
- (double)defaultDrawerHeight;
- (double)maximumDrawerHeight;
- (_Bool)expandable;
- (void)startCallAccessoryGracePeriod;
- (void)recycleDrawerView;
- (void)resignFromActive;
- (UIView *)drawerView;
@end

