//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTBaseViewModel.h"

#import "FollowModelObserver.h"

@class MultipleFollowModel, NSString, NSURL, SPTProfileSocialRelationsViewModelData;

@interface SPTProfileSocialRelationsViewModel : SPTBaseViewModel <FollowModelObserver>
{
    SPTProfileSocialRelationsViewModelData *_data;
    NSURL *_uri;
    unsigned long long _socialRelationsType;
    MultipleFollowModel *_followModel;
    id <FollowFeature> _followFeature;
    id <SPTLinkDispatcher> _linkDispatcher;
}

@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) __weak id <FollowFeature> followFeature; // @synthesize followFeature=_followFeature;
@property(retain, nonatomic) MultipleFollowModel *followModel; // @synthesize followModel=_followModel;
@property(readonly, nonatomic) unsigned long long socialRelationsType; // @synthesize socialRelationsType=_socialRelationsType;
@property(readonly, nonatomic) NSURL *uri; // @synthesize uri=_uri;
@property(readonly, nonatomic) SPTProfileSocialRelationsViewModelData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)followModel:(id)arg1 updateDidFailWithError:(id)arg2;
- (void)followModel:(id)arg1 followDataDidChange:(id)arg2;
- (void)pushViewControllerForEntity:(id)arg1 rank:(unsigned long long)arg2;
- (void)toggleFollowStateForURI:(id)arg1;
- (id)parseResponse:(id)arg1 requestKey:(id)arg2 error:(id *)arg3;
- (id)initWithRequestURLDictionary:(id)arg1 offlineModeState:(id)arg2 uri:(id)arg3 socialRelationsType:(unsigned long long)arg4 dataLoader:(id)arg5 followFeature:(id)arg6 linkDispatcher:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SPTProfileSocialRelationsViewModelDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

