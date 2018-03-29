//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (Station)
+ (id)spt_stationURLWithSeed:(id)arg1;
- (id)spt_URIByNormalizingRadioStation;
- (id)spt_radioStationSeedURI;
@property(readonly, nonatomic, getter=spt_isSongSeededRadioStationURL) _Bool songSeededRadioStationURL;
@property(readonly, nonatomic, getter=spt_isPlaylistSeededRadioStationURL) _Bool playlistSeededRadioStationURL;
@property(readonly, nonatomic, getter=spt_isAlbumSeededRadioStationURL) _Bool albumSeededRadioStationURL;
@property(readonly, nonatomic, getter=spt_isArtistSeededRadioStationURL) _Bool artistSeededRadioStationURL;
@property(readonly, nonatomic, getter=spt_isRadioStationURL) _Bool radioStationURL;
- (_Bool)spt_isZeldaStationURL;
@property(readonly, nonatomic, getter=spt_isStationURL) _Bool stationURL;
@end

