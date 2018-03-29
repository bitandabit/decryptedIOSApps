//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SWTableViewCell.h"

@class NSString, PreviewViewController, SCFriendProfileCellTextViewV2, SCShazamOperaPresenter, SCUserSession, UIImageView, UIView;
@protocol SCSWSongInfoCellDelegate;

@interface SCSWSongInfoCell : SWTableViewCell
{
    UIView *_bottomBorder;
    UIView *_thumbnailContainer;
    UIImageView *_thumbnail;
    UIView *_buttonEmojiContainer;
    SCFriendProfileCellTextViewV2 *_textViewV2;
    NSString *_songURL;
    NSString *_highDefArtistImageUrl;
    NSString *_songTitle;
    NSString *_artistName;
    PreviewViewController *_previewViewController;
    SCUserSession *_userSession;
    SCShazamOperaPresenter *_presenter;
    id <SCSWSongInfoCellDelegate> _gestureDelegate;
}

@property(nonatomic) __weak id <SCSWSongInfoCellDelegate> gestureDelegate; // @synthesize gestureDelegate=_gestureDelegate;
- (void).cxx_destruct;
- (void)handleTap;
- (void)updateButtonWithArtistImageUrl:(id)arg1 songUrl:(id)arg2 songTitle:(id)arg3 artistName:(id)arg4;
- (void)updateWithMainLabel:(id)arg1 subLabel:(id)arg2 thirdLabel:(id)arg3 style:(long long)arg4;
- (void)updateThumbnailWithURL:(id)arg1;
- (void)setBottomBorderColorOpacityWithAlpha:(double)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setBottomBorderHidden:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 userSession:(id)arg3;

@end

