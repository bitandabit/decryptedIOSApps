//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

@class SCBitmojiManager, SCSearchGroupAvatarsView, UILabel;

@interface SCSearchGroupChatSmallCell : SCSearchCollectionViewCell
{
    UILabel *_titleLabel;
    SCSearchGroupAvatarsView *_avatarsView;
    id _viewModel;
    SCBitmojiManager *_bitmojiManager;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
+ (struct CGSize)cellSizeWithTitle:(id)arg1;
@property(retain, nonatomic) SCBitmojiManager *bitmojiManager; // @synthesize bitmojiManager=_bitmojiManager;
- (id)viewModel;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

