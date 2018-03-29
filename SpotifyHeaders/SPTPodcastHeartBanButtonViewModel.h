//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTFreeTierEntityHeartBanButtonViewModelBase.h"

@interface SPTPodcastHeartBanButtonViewModel : SPTFreeTierEntityHeartBanButtonViewModelBase
{
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTCollectionPlatformDataLoaderRequestToken> _collectionStateRequestToken;
}

@property(readonly, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> collectionStateRequestToken; // @synthesize collectionStateRequestToken=_collectionStateRequestToken;
@property(readonly, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
- (void).cxx_destruct;
- (void)evaluateStateForCollectionState:(unsigned long long)arg1 error:(id)arg2;
- (void)unlike;
- (void)like;
- (id)initWithPodcastURI:(id)arg1 collectionConfiguration:(id)arg2 logger:(id)arg3 collectionPlatform:(id)arg4;

@end

