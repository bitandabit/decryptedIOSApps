//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTBaseViewModel.h"

#import "FollowModelObserver.h"
#import "SPTProfileUserDataChangeObserver.h"

@class FollowModel, NSString, NSURL, SPTProfileViewModelData;

@interface SPTProfileViewModel : SPTBaseViewModel <FollowModelObserver, SPTProfileUserDataChangeObserver>
{
    NSString *_currentUsername;
    NSURL *_profileUserImageURL;
    SPTProfileViewModelData *_data;
    id <FollowFeature> _followFeature;
    id <SPTProfileUserData> _profileUserData;
    FollowModel *_followModel;
}

@property(retain, nonatomic) FollowModel *followModel; // @synthesize followModel=_followModel;
@property(retain, nonatomic) id <SPTProfileUserData> profileUserData; // @synthesize profileUserData=_profileUserData;
@property(nonatomic) __weak id <FollowFeature> followFeature; // @synthesize followFeature=_followFeature;
@property(readonly, nonatomic) SPTProfileViewModelData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURL *profileUserImageURL; // @synthesize profileUserImageURL=_profileUserImageURL;
@property(readonly, nonatomic) NSString *currentUsername; // @synthesize currentUsername=_currentUsername;
- (void).cxx_destruct;
- (void)updateProfileUserData;
- (void)profileUserDataDidChange:(id)arg1;
- (void)followModel:(id)arg1 updateDidFailWithError:(id)arg2;
- (void)followModel:(id)arg1 followDataDidChange:(id)arg2;
- (_Bool)isContentSectionEmpty;
- (id)parseResponse:(id)arg1 requestKey:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) _Bool isCurrentUser;
@property(readonly, nonatomic) NSString *profileUsername;
- (long long)dataTypeForEntity:(id)arg1;
- (id)entityForViewModelDataType:(long long)arg1 index:(unsigned long long)arg2;
- (id)modelCollectionForViewModelDataType:(long long)arg1;
- (void)toggleFollowState;
- (id)sectionDataTypes;
- (void)requestData;
- (id)initWithRequestURLDictionary:(id)arg1 offlineModeState:(id)arg2 followFeature:(id)arg3 currentUsername:(id)arg4 dataLoader:(id)arg5 profileUserData:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SPTProfileViewModelDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
