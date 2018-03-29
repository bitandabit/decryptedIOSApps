//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCOperaPlaylistBrowserCell-Protocol.h"

@class NSString, UIImageView, UIView;

@interface SCOperaPlaylistBrowserIconCollectionViewCell : UICollectionViewCell <SCOperaPlaylistBrowserCell>
{
    UIView *_containerView;
    UIView *_dimView;
    UIImageView *_replayImageView;
    UIImageView *_iconImageView;
    NSString *_identifier;
}

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (_Bool)shouldRespondToTouchWithPoint:(struct CGPoint)arg1;
- (void)updateWithPercentOffsetFromCenter:(double)arg1;
- (void)setReplayState:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

