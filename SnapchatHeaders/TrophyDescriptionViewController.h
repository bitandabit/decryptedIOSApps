//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPopupViewController.h"

@class SOJUIdentityTrophy, TrophyView, UILabel;

@interface TrophyDescriptionViewController : SCPopupViewController
{
    TrophyView *_currentTrophyView;
    UILabel *_descriptionLabel;
    SOJUIdentityTrophy *_trophyResponse;
    double _compressHeightRatio;
}

@property double compressHeightRatio; // @synthesize compressHeightRatio=_compressHeightRatio;
@property(retain, nonatomic) SOJUIdentityTrophy *trophyResponse; // @synthesize trophyResponse=_trophyResponse;
- (void).cxx_destruct;
- (double)_minimumTrophyFontSize;
- (void)dismissPopupViewController:(id)arg1;
- (void)viewTrophy:(id)arg1;
- (void)initBackgroundTint;
- (void)initViewWithTrophies;
- (void)initPopupView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (double)getHeight;
- (double)getWidth;
- (id)initWithTrophy:(id)arg1;

@end

