//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCChatMessageViewModel-Protocol.h"

@class NSString;

@interface SCBaseChatCellViewModel : NSObject <SCChatMessageViewModel>
{
    _Bool _isLastViewModel;
    _Bool _topRightCornerIsRounded;
    _Bool _bottomRightCornerIsRounded;
    _Bool _bottomLeftCornerIsRounded;
    int _headerIndex;
    double _height;
    double _dateHeaderHeight;
    double _headerHorizontalMargin;
}

+ (id)attributedStringForStatusMessage:(id)arg1;
+ (id)notificationLabelColor;
+ (id)notificationLabelFont;
+ (id)dateHeaderLabelColor;
+ (id)dateHeaderLabelFont;
@property(nonatomic) int headerIndex; // @synthesize headerIndex=_headerIndex;
@property(nonatomic) _Bool bottomLeftCornerIsRounded; // @synthesize bottomLeftCornerIsRounded=_bottomLeftCornerIsRounded;
@property(nonatomic) _Bool bottomRightCornerIsRounded; // @synthesize bottomRightCornerIsRounded=_bottomRightCornerIsRounded;
@property(nonatomic) _Bool topRightCornerIsRounded; // @synthesize topRightCornerIsRounded=_topRightCornerIsRounded;
@property(readonly, nonatomic) double headerHorizontalMargin; // @synthesize headerHorizontalMargin=_headerHorizontalMargin;
@property(readonly, nonatomic) double dateHeaderHeight; // @synthesize dateHeaderHeight=_dateHeaderHeight;
@property(nonatomic) _Bool isLastViewModel; // @synthesize isLastViewModel=_isLastViewModel;
@property(nonatomic) double height; // @synthesize height=_height;
- (_Bool)isEqual:(id)arg1;
- (void)refreshViewModel;
- (double)intervalFromPrevious;
- (_Bool)shouldShowTimestamp;
- (_Bool)shouldShowSenderHeader;
- (_Bool)shouldShowDateHeader;
- (_Bool)needsExtraSpacingOnTop;
- (_Bool)shouldDisplayBelowFoldInChatForPreviewMode;
- (_Bool)shouldDisplayBelowFoldInChat;
- (id)reusableCellIdentifier;
- (double)heightWithBottomPadding:(_Bool)arg1 cellHeightCache:(id)arg2;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)initWithProps:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
