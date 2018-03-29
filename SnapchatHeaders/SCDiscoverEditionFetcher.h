//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCDiscoverChannelsModel;
@protocol SCPerforming;

@interface SCDiscoverEditionFetcher : NSObject
{
    SCDiscoverChannelsModel *_discoverChannelsModel;
    id <SCPerforming> _performer;
}

@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
- (void).cxx_destruct;
- (void)fetchEdition:(id)arg1 publisher:(id)arg2 publisherId:(long long)arg3 subscribeState:(unsigned long long)arg4 context:(unsigned long long)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)fetchEdition:(id)arg1 publisher:(id)arg2 context:(unsigned long long)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)initWithDiscoverChannelsModel:(id)arg1;

@end

