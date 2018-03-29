//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class Friend, NSString, NSValue, Story, UIColor, UIFont;

@interface SCStoryChromeViewModel : NSObject
{
    Story *_story;
    UIColor *_snapDisplayTitleColor;
    UIColor *_snapDisplaySubTitleColor;
    NSString *_localMischiefId;
}

+ (id)chromeViewModelForContributionStoryWithServerId:(id)arg1;
- (void).cxx_destruct;
- (id)_groupStoryPublication;
- (id)_insertOfficialEmojiInDisplaySubtitle:(id)arg1 location:(long long)arg2;
- (id)_groupStoryAttribute;
- (id)_officialStoryAttribute;
- (id)_spectaclesSubtitle;
- (id)snapPostTimeAgo;
- (id)_snapPostTimeDate;
- (id)mischiefId;
- (id)snapDisplaySubtitlePublicationIcon;
- (id)groupParticipantsForOperaChromeHeaderAvatar;
- (id)friendForOperaChromeHeaderAvatar;
@property(readonly, copy, nonatomic) NSString *snapPosterDisplayName;
@property(readonly, nonatomic) _Bool canViewSnapPosterScore;
@property(readonly, nonatomic) unsigned long long snapPosterScore;
@property(readonly, nonatomic) Friend *snapPosterUser;
- (id)snapPosterDisplayNameWithDefaultSnapDisplayTitle:(id)arg1;
@property(readonly, nonatomic) _Bool hasShadow;
@property(readonly, nonatomic) _Bool hasGradient;
@property(readonly, nonatomic) _Bool userInteractionEnabled;
@property(readonly, nonatomic) UIFont *snapDisplayTitleFont;
@property(readonly, copy, nonatomic) NSString *snapIconName;
@property(readonly, nonatomic) UIColor *snapDisplaySubTitleColor;
@property(readonly, nonatomic) UIColor *snapAdditionalDisplayColor;
@property(readonly, nonatomic) UIColor *snapDisplayTitleColor;
@property(readonly, copy, nonatomic) NSString *snapPosterUsername;
@property(readonly, copy, nonatomic) NSValue *snapDisplaySubTitleUnderlineRange;
@property(readonly, copy, nonatomic) NSString *snapDisplaySubTitle;
@property(readonly, copy, nonatomic) NSString *snapAdditionalDisplayTitle;
- (id)snapDisplayTitleWithEmoji:(_Bool)arg1;
- (id)initWithStory:(id)arg1;

@end

