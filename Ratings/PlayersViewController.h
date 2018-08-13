//
//  PlayersViewController.h
//  Ratings
//
//  Created by Bennett on 2018-08-13.
//  Copyright © 2018 Bennett. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerDetailsViewController.h"

@interface PlayersViewController : UITableViewController <PlayerDetailsViewControllerDelegate>

@property (nonatomic, strong) NSMutableArray *players;
@end
