//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface SCShazamAddFriendList : NSObject
{
    NSDictionary *_artistNameToUserNameMapping;
    NSString *_artistUsernamesServerVersion;
}

@property(copy, nonatomic) NSString *artistUsernamesServerVersion; // @synthesize artistUsernamesServerVersion=_artistUsernamesServerVersion;
@property(copy, nonatomic) NSDictionary *artistNameToUserNameMapping; // @synthesize artistNameToUserNameMapping=_artistNameToUserNameMapping;
- (void).cxx_destruct;
- (id)_generateComponentsForStrings:(id)arg1 withSeparator:(CDUnknownBlockType)arg2;
- (id)_parseArtistNamesFromSongInfo:(id)arg1;
- (id)matchedUsernamesFromSongInfo:(id)arg1;
- (void)loadFromServerResponse:(id)arg1;

@end

