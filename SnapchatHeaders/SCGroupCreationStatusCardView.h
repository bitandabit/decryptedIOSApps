//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCActionMenuRenderableCellContentView-Protocol.h"

@class NSArray, NSMutableArray, SCGroupCreateChatViewModel, UILabel;

@interface SCGroupCreationStatusCardView : UIView <SCActionMenuRenderableCellContentView>
{
    UILabel *_creationLabel;
    UIView *_groupBitmojiView;
    NSArray *_groupMembers;
    NSMutableArray *_groupMemberIcons;
    NSMutableArray *_groupMemberBitmojis;
    UIView *_overflowIcon;
    UILabel *_overflowLabel;
    SCGroupCreateChatViewModel *_viewModel;
}

+ (id)grayFrameColor;
@property(retain, nonatomic) SCGroupCreateChatViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)resetWithOriginalSettings;
- (void)rerenderForActionMenuWithBoundingSize:(struct CGSize)arg1;
- (void)layoutBitmojis;
- (void)layoutSubviews;
- (void)initializeOverflow;
- (id)init;

@end

