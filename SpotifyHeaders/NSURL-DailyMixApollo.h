//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (DailyMixApollo)
+ (id)spt_dailymixApolloClusters;
+ (id)spt_dailymixApolloDailyMixNegativeArtistFeedbackForTrack:(id)arg1 station:(id)arg2;
+ (id)spt_dailymixApolloDailyMixNegativeSongFeedbackForTrack:(id)arg1 station:(id)arg2;
+ (id)spt_dailymixApolloDailyMixPositiveSongFeedbackForTrack:(id)arg1 station:(id)arg2;
+ (id)spt_feedbackURIForService:(id)arg1 feedbackTypeComponent:(id)arg2 entityTypeComponent:(id)arg3 track:(id)arg4 station:(id)arg5;
+ (id)spt_radioApolloMixesFeedbackAll;
+ (id)spt_radioApolloDeleteSingleFeedbackWithScope:(long long)arg1 contextID:(id)arg2 trackID:(id)arg3;
+ (id)spt_radioApolloEntityForEntityURI:(id)arg1;
@property(readonly, nonatomic, getter=spt_isRadioApolloEntity) _Bool radioApolloEntity;
@end

