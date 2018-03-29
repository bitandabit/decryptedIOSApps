//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface SCProfileUserInfoView : UIView
{
    _Bool _lightColor;
    UILabel *_usernameLabel;
    UILabel *_scoreLabel;
    UIView *_scoreContainer;
    UIView *_astrologicalSignContainer;
    UIView *_usernameAndScoreSeparator;
    UIView *_scoreAndAstrologicalSignSeparator;
    UILabel *_astrologicalSign;
}

@property(retain, nonatomic) UILabel *astrologicalSign; // @synthesize astrologicalSign=_astrologicalSign;
@property(retain, nonatomic) UIView *scoreAndAstrologicalSignSeparator; // @synthesize scoreAndAstrologicalSignSeparator=_scoreAndAstrologicalSignSeparator;
@property(retain, nonatomic) UIView *usernameAndScoreSeparator; // @synthesize usernameAndScoreSeparator=_usernameAndScoreSeparator;
@property(retain, nonatomic) UIView *astrologicalSignContainer; // @synthesize astrologicalSignContainer=_astrologicalSignContainer;
@property(retain, nonatomic) UIView *scoreContainer; // @synthesize scoreContainer=_scoreContainer;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
- (void).cxx_destruct;
- (id)textColor;
- (id)textFont;
- (void)setUsername:(id)arg1 score:(unsigned long long)arg2 astrologicalSign:(id)arg3 birthdayPartyEnabled:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1 lightColor:(_Bool)arg2;

@end

