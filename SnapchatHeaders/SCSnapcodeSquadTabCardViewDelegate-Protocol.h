//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCScannableInfo, SCSnapcodeSquadTabCardView;

@protocol SCSnapcodeSquadTabCardViewDelegate <NSObject>

@optional
- (void)snapcodeSquadCardDidClickAddMembers:(SCSnapcodeSquadTabCardView *)arg1;
- (void)snapcodeSquadCard:(SCSnapcodeSquadTabCardView *)arg1 editScannable:(SCScannableInfo *)arg2;
- (void)snapcodeSquadCard:(SCSnapcodeSquadTabCardView *)arg1 createScannable:(SCScannableInfo *)arg2;
@end
