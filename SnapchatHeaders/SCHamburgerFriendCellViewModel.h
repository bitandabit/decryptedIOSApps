//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, SCUserSession;
@protocol SCChatGroupParticipant;

@interface SCHamburgerFriendCellViewModel : NSObject
{
    NSString *_identifier;
    SCUserSession *_userSession;
    id <SCChatGroupParticipant> _participantInfo;
    NSString *_nameToDisplay;
    unsigned long long _cellType;
}

@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(readonly, nonatomic) NSString *nameToDisplay; // @synthesize nameToDisplay=_nameToDisplay;
@property(readonly, nonatomic) id <SCChatGroupParticipant> participantInfo; // @synthesize participantInfo=_participantInfo;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithUserSession:(id)arg1 identifier:(id)arg2 nameToDisplay:(id)arg3 cellType:(unsigned long long)arg4 participantInfo:(id)arg5;

@end

